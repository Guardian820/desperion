//  Generated by desperion protocol_builder

#ifndef d2fstream_max_rank_criterion_hpp
#define d2fstream_max_rank_criterion_hpp

namespace datacenter
{
    struct max_rank_criterion : item_criterion
    {
        
        max_rank_criterion()
        {
        }
        
        max_rank_criterion(data_object && data) : item_criterion { std::forward<data_object>(data) }
        {
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data = item_criterion::to_d2o(file);
        data.first = file.get_class_id_for_type<max_rank_criterion>();
        return data;
    }
#endif
}
#endif