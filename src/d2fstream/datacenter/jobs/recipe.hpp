//  Generated by desperion protocol_builder

#ifndef d2fstream_recipe_hpp
#define d2fstream_recipe_hpp

namespace datacenter
{
    struct recipe : data_holder
    {
        int32_t result_id;
        int32_t result_level;
        std::vector<int32_t> ingredient_ids;
        std::vector<uint32_t> quantities;
        
        recipe() = default;
        
        recipe(const int32_t & result_id, const int32_t & result_level, const std::vector<int32_t> & ingredient_ids, const std::vector<uint32_t> & quantities) : result_id { result_id }, result_level { result_level }, ingredient_ids { ingredient_ids }, quantities { quantities }
        {
        }
        
        recipe(data_object && data)
        {
            acquire(result_id, data.second.at("resultId"));
            acquire(result_level, data.second.at("resultLevel"));
            acquire(ingredient_ids, data.second.at("ingredientIds"));
            acquire(quantities, data.second.at("quantities"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<recipe>();
        release(result_id, data.second["resultId"], file);
        release(result_level, data.second["resultLevel"], file);
        release(ingredient_ids, data.second["ingredientIds"], file);
        release(quantities, data.second["quantities"], file);
        return data;
    }
#endif
}
#endif