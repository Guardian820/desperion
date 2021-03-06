//  Generated by desperion protocol_builder

#ifndef d2fstream_living_object_skin_jnt_mood_hpp
#define d2fstream_living_object_skin_jnt_mood_hpp

namespace datacenter
{
    struct living_object_skin_jnt_mood : data_holder
    {
        int32_t skin_id;
        std::vector<int32_t> moods;
        
        living_object_skin_jnt_mood() = default;
        
        living_object_skin_jnt_mood(const int32_t & skin_id, const std::vector<int32_t> & moods) : skin_id { skin_id }, moods { moods }
        {
        }
        
        living_object_skin_jnt_mood(data_object && data)
        {
            acquire(skin_id, data.second.at("skinId"));
            acquire(moods, data.second.at("moods"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<living_object_skin_jnt_mood>();
        release(skin_id, data.second["skinId"], file);
        release(moods, data.second["moods"], file);
        return data;
    }
#endif
}
#endif