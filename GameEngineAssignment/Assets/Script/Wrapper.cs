using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class Wrapper : MonoBehaviour
{
    public static int hi = 40;
    const string DLL_NAME = "PluginWrapper";


    [DllImport(DLL_NAME)]
    private static extern void Load2();
    [DllImport(DLL_NAME)]
    private static extern void Save2(float x, float y, float z);
    [DllImport(DLL_NAME)]
    private static extern float GetX();
    [DllImport(DLL_NAME)]
    private static extern float GetY();
    [DllImport(DLL_NAME)]
    private static extern float GetZ();

    public static Vector3 LoadPosition()
    {
        Load2();

        return new Vector3(GetX(), GetY(), GetZ());
    }
    public static void SavePosition(float x, float y, float z)
    {
        Save2(x, y, z);
        
    }



    private void Start()
    {

        
    }
}
