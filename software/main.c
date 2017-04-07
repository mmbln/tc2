/*
 * main.c
 *
 * mmblnfrn@gmail.com
 *
 */

static unsigned int switch_on_time;    // dezimal time HHMMSS 000000 - 235959
static unsigned int switch_off_time;

static unsigned char relais_state;     // four states for each relais

/*----------------------------------------------------------------
 * main
 *----------------------------------------------------------------
 */

main()
{
  init_all();

  while(1) {
    // main loop

    // get the current time
    get_current_time(&current_time);

    // get the switch times
    get_switch_times(current_time);

    // 
    control_relais(current_ime, );
    sleep(60);
  }
}


/*----------------------------------------------------------------
 * next_second
 *----------------------------------------------------------------
 */
void next_second()
{
  // this routine is called every second and switches the relais if necessary
  //
  // it also makes some blinking with the four leds
}
