from fastapi import FastAPI, File, UploadFile
import shutil
from detector import analyze_file

app = FastAPI()

@app.get("/")
def home():
    return {"message": "Backend working!"}

@app.post("/analyze")
async def analyze(file: UploadFile = File(...)):
    file_path = f"temp_{file.filename}"
    
    with open(file_path, "wb") as buffer:
        shutil.copyfileobj(file.file, buffer)
    
    result = analyze_file(file_path)
    return result
T

