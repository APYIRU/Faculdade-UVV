import os

# Script PowerShell como uma string

powershell_script = '''

if (-Not (Test-Path "venv")) {
    py -m venv venv
}

Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser -Force

. .\\venv\\Scripts\\Activate.ps1

py -m pip install --upgrade pip

'''


# Salva o script em um arquivo temporário
with open("temp_script.ps1", "w") as f:
    f.write(powershell_script)

# Executa o script usando PowerShell

os.system("powershell -ExecutionPolicy Bypass -File temp_script.ps1")

# Remove o script temporário (opcional)
os.remove("temp_script.ps1")
