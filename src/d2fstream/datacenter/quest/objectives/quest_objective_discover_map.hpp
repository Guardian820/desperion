//  Generated by desperion protocol_builder

#ifndef d2fstream_quest_objective_discover_map_hpp
#define d2fstream_quest_objective_discover_map_hpp

namespace datacenter
{
    struct quest_objective_discover_map : quest_objective
    {
        
        quest_objective_discover_map() = default;
        
        quest_objective_discover_map(const int32_t & id, const int32_t & step_id, const int32_t & type_id, const int32_t & dialog_id, const std::vector<uint32_t> & parameters, const point & coords) : quest_objective { id, step_id, type_id, dialog_id, parameters, coords }
        {
        }
        
        quest_objective_discover_map(data_object && data) : quest_objective { std::forward<data_object>(data) }
        {
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data = quest_objective::to_d2o(file);
        data.first = file.get_class_id_for_type<quest_objective_discover_map>();
        return data;
    }
#endif
}
#endif