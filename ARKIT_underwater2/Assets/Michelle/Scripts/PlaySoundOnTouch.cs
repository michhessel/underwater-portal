using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaySoundOnTouch : MonoBehaviour {


	public AudioSource bubs;

	// Use this for initialization
	void Start () {
		bubs = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		foreach (Touch touch in Input.touches) {
			if (touch.phase != TouchPhase.Ended && touch.phase != TouchPhase.Canceled) {
				bubs.Play ();

			}
	}
}
}
