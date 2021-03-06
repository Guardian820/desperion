//  Generated by desperion protocol_builder

#ifndef core_update_map_players_agressable_status_message_hpp
#define core_update_map_players_agressable_status_message_hpp

namespace protocol
{
    struct update_map_players_agressable_status_message : dofus_unit
    {
        std::vector<int32_t> player_ids;
        std::vector<int8_t> enable;
        
        int16_t id() const override
        { return 6454; } 
        
        update_map_players_agressable_status_message(const std::vector<int32_t> & player_ids, const std::vector<int8_t> & enable)
        {
            _data << static_cast<int16_t>(player_ids.size());
            for (auto && i : player_ids)
                _data << i;
            _data << enable;
        }
        
        update_map_players_agressable_status_message(byte_buffer & data)
        {
            int16_t player_ids_size;
            data >> player_ids_size;
            player_ids.resize(player_ids_size);
            for (int16_t i = 0; i < player_ids_size; ++i)
                data >> player_ids[i];
            data >> enable;
        }
    };
}

#endif
