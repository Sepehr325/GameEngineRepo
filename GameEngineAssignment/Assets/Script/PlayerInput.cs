using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;


public class PlayerInput : MonoBehaviour
{


    float speed = 5;
    Wrapper Plugin;
    Vector3 rootpos;
    void Start()
    {
        rootpos = gameObject.transform.position;
    }

    void Update()
    {
        float curspeed = speed * Time.deltaTime;

        if (Input.GetKey("d"))
        {
            this.gameObject.transform.position += new Vector3( curspeed, 0.0f, 0.0f);
        }
        if (Input.GetKey("s"))
        {
            this.gameObject.transform.position -= new Vector3(0.0f, 0.0f, curspeed);
        }
        if (Input.GetKey("a"))
        {
            this.gameObject.transform.position -= new Vector3(curspeed, 0.0f, 0.0f);
        }
        if (Input.GetKey("w"))
        {
            this.gameObject.transform.position += new Vector3(0.0f, 0.0f, curspeed);
        }

        if (Input.GetKey("k"))
        {
            Vector3 ex = this.gameObject.transform.position;
            Wrapper.SavePosition(ex.x, ex.y, ex.z);
        }
        if (Input.GetKey("l"))
        {
            this.gameObject.transform.position = Wrapper.LoadPosition();
        }
        if (Input.GetKey("r"))
        {
            gameObject.transform.position = rootpos;
        }
    }
}
