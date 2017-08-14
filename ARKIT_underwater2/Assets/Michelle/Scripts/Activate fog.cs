using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Activatefog : MonoBehaviour {

	public GameObject triggerfog; 


void OnTriggerEnter(Collider triggerfog) {
		Debug.Log ("fog");
	Destroy(triggerfog.gameObject);
}
}