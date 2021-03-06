//  Generated by desperion protocol_builder

#ifndef core_atlas_points_informations_hpp
#define core_atlas_points_informations_hpp

namespace protocol
{
    struct atlas_points_informations : dofus_unit
    {
        int8_t type;
        std::vector<map_coordinates_extended_ptr> coords;
        
        int16_t id() const override
        { return 175; } 
        
        atlas_points_informations(const int8_t & type, const std::vector<map_coordinates_extended_ptr> & coords)
        {
            _data << type;
            _data << static_cast<int16_t>(coords.size());
            for (auto && i : coords)
                _data << i->buffer();
        }
        
        atlas_points_informations(byte_buffer & data)
        {
            data >> type;
            int16_t coords_size;
            data >> coords_size;
            coords.resize(coords_size);
            for (int16_t i = 0; i < coords_size; ++i)
                coords[i] = std::make_unique<map_coordinates_extended>(data);
        }
    };
    
    using atlas_points_informations_ptr = std::unique_ptr<atlas_points_informations>;
}

#endif
