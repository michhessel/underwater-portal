using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fogStart : MonoBehaviour {

	public GameObject triggerfog; 

	void OnTriggerEnter(Collider triggerfog) {
		Debug.Log ("fog");
			RenderSettings.fog = !RenderSettings.fog;

	}
}
