//  Generated by desperion protocol_builder

#ifndef core_basic_guild_informations_hpp
#define core_basic_guild_informations_hpp

namespace protocol
{
    struct basic_guild_informations : abstract_social_group_infos
    {
        int32_t guild_id;
        std::string guild_name;
        
        int16_t id() const override
        { return 365; } 
        
        basic_guild_informations(const int32_t & guild_id, const std::string & guild_name)
        {
            _data << guild_id;
            _data << guild_name;
        }
        
        basic_guild_informations(byte_buffer & data) : abstract_social_group_infos { data }
        {
            data >> guild_id;
            data >> guild_name;
        }
    };
    
    using basic_guild_informations_ptr = std::unique_ptr<basic_guild_informations>;
}

#endif
