/* This file is generated from specs/channel.get-reactions.json, Please don't edit it. */
/*

*/

/* https://discord.com/developers/docs/resources/channel#get-reactions */
/* This is defined at specs/channel.get-reactions.json:8:22 */
struct params {
  /* specs/channel.get-reactions.json:11:20
     '{ "name": "before", "type":{ "base":"char", "dec":"*", "converter":"snowflake" }, "loc":"query"}'
  */
  u64_snowflake_t before;

  /* specs/channel.get-reactions.json:12:20
     '{ "name": "after", "type":{ "base":"char", "dec":"*", "converter":"snowflake" }, "loc":"query"}'
  */
  u64_snowflake_t after;

  /* specs/channel.get-reactions.json:13:20
     '{ "name": "limit", "type":{ "base":"int" }, "loc":"query"}'
  */
  int limit;

  // The following is metadata used to 
  // 1. control which field should be extracted/injected
  // 2. record which field is presented(defined) in JSON
  // 3. record which field is null in JSON
  struct {
    bool enable_arg_switches;
    bool enable_record_defined;
    bool enable_record_null;
    void *arg_switches[3];
    void *record_defined[3];
    void *record_null[3];
  } __M; // metadata
};
extern void params_cleanup_v(void *p);
extern void params_cleanup(struct params *p);
extern void params_init_v(void *p);
extern void params_init(struct params *p);
extern struct params * params_alloc();
extern void params_free_v(void *p);
extern void params_free(struct params *p);
extern void params_from_json_v(char *json, size_t len, void *p);
extern void params_from_json(char *json, size_t len, struct params *p);
extern size_t params_to_json_v(char *json, size_t len, void *p);
extern size_t params_to_json(char *json, size_t len, struct params *p);
extern size_t params_to_query_v(char *json, size_t len, void *p);
extern size_t params_to_query(char *json, size_t len, struct params *p);
extern void params_list_free_v(void **p);
extern void params_list_free(struct params **p);
extern void params_list_from_json_v(char *str, size_t len, void *p);
extern void params_list_from_json(char *str, size_t len, struct params ***p);
extern size_t params_list_to_json_v(char *str, size_t len, void *p);
extern size_t params_list_to_json(char *str, size_t len, struct params **p);
