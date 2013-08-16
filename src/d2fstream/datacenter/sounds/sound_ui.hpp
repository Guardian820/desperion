//  Generated by desperion protocol_builder

#ifndef d2fstream_sound_ui_hpp
#define d2fstream_sound_ui_hpp

namespace datacenter
{
    struct sound_ui : data_holder
    {
        int32_t id;
        std::string ui_name;
        std::string open_file;
        std::string close_file;
        std::vector<sound_ui_element> sub_elements;
        
        sound_ui() = default;
        
        sound_ui(const int32_t & id, const std::string & ui_name, const std::string & open_file, const std::string & close_file, const std::vector<sound_ui_element> & sub_elements) : id { id }, ui_name { ui_name }, open_file { open_file }, close_file { close_file }, sub_elements { sub_elements }
        {
        }
        
        sound_ui(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(ui_name, data.second.at("uiName"));
            acquire(open_file, data.second.at("openFile"));
            acquire(close_file, data.second.at("closeFile"));
            acquire(sub_elements, data.second.at("subElements"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<sound_ui>();
        release(id, data.second["id"], file);
        release(ui_name, data.second["uiName"], file);
        release(open_file, data.second["openFile"], file);
        release(close_file, data.second["closeFile"], file);
        release(sub_elements, data.second["subElements"], file);
        return data;
    }
#endif
}
#endif