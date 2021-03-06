//  Generated by desperion protocol_builder

#ifndef core_emote_play_massive_message_hpp
#define core_emote_play_massive_message_hpp

namespace protocol
{
    struct emote_play_massive_message : emote_play_abstract_message
    {
        std::vector<int32_t> actor_ids;
        
        int16_t id() const override
        { return 5691; } 
        
        emote_play_massive_message(const int8_t & emote_id, const double & emote_start_time, const std::vector<int32_t> & actor_ids) : emote_play_abstract_message { emote_id,emote_start_time }
        {
            _data << static_cast<int16_t>(actor_ids.size());
            for (auto && i : actor_ids)
                _data << i;
        }
        
        emote_play_massive_message(byte_buffer & data) : emote_play_abstract_message { data }
        {
            int16_t actor_ids_size;
            data >> actor_ids_size;
            actor_ids.resize(actor_ids_size);
            for (int16_t i = 0; i < actor_ids_size; ++i)
                data >> actor_ids[i];
        }
    };
}

#endif
