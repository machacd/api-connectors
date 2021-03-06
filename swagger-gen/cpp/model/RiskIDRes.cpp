/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "RiskIDRes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RiskIDRes::RiskIDRes()
{
    m_Id = 0.0;
    m_IdIsSet = false;
    m_Coin = utility::conversions::to_string_t("");
    m_CoinIsSet = false;
    m_Limit = 0.0;
    m_LimitIsSet = false;
    m_Maintain_margin = utility::conversions::to_string_t("");
    m_Maintain_marginIsSet = false;
    m_Starting_margin = utility::conversions::to_string_t("");
    m_Starting_marginIsSet = false;
    m_Section = utility::conversions::to_string_t("");
    m_SectionIsSet = false;
    m_Is_lowest_risk = 0.0;
    m_Is_lowest_riskIsSet = false;
    m_Created_at = utility::conversions::to_string_t("");
    m_Created_atIsSet = false;
    m_Updated_at = utility::conversions::to_string_t("");
    m_Updated_atIsSet = false;
}

RiskIDRes::~RiskIDRes()
{
}

void RiskIDRes::validate()
{
    // TODO: implement validation
}

web::json::value RiskIDRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_CoinIsSet)
    {
        val[utility::conversions::to_string_t("coin")] = ModelBase::toJson(m_Coin);
    }
    if(m_LimitIsSet)
    {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(m_Limit);
    }
    if(m_Maintain_marginIsSet)
    {
        val[utility::conversions::to_string_t("maintain_margin")] = ModelBase::toJson(m_Maintain_margin);
    }
    if(m_Starting_marginIsSet)
    {
        val[utility::conversions::to_string_t("starting_margin")] = ModelBase::toJson(m_Starting_margin);
    }
    if(m_SectionIsSet)
    {
        val[utility::conversions::to_string_t("section")] = ModelBase::toJson(m_Section);
    }
    if(m_Is_lowest_riskIsSet)
    {
        val[utility::conversions::to_string_t("is_lowest_risk")] = ModelBase::toJson(m_Is_lowest_risk);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(m_Updated_at);
    }

    return val;
}

void RiskIDRes::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("coin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("coin")];
        if(!fieldValue.is_null())
        {
            setCoin(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("limit")];
        if(!fieldValue.is_null())
        {
            setLimit(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maintain_margin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("maintain_margin")];
        if(!fieldValue.is_null())
        {
            setMaintainMargin(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("starting_margin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("starting_margin")];
        if(!fieldValue.is_null())
        {
            setStartingMargin(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("section")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("section")];
        if(!fieldValue.is_null())
        {
            setSection(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_lowest_risk")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("is_lowest_risk")];
        if(!fieldValue.is_null())
        {
            setIsLowestRisk(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("created_at")];
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("updated_at")];
        if(!fieldValue.is_null())
        {
            setUpdatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void RiskIDRes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_CoinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("coin"), m_Coin));
        
    }
    if(m_LimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("limit"), m_Limit));
    }
    if(m_Maintain_marginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maintain_margin"), m_Maintain_margin));
        
    }
    if(m_Starting_marginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("starting_margin"), m_Starting_margin));
        
    }
    if(m_SectionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("section"), m_Section));
        
    }
    if(m_Is_lowest_riskIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("is_lowest_risk"), m_Is_lowest_risk));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created_at"), m_Created_at));
        
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updated_at"), m_Updated_at));
        
    }
}

void RiskIDRes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("coin")))
    {
        setCoin(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("coin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("limit")))
    {
        setLimit(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("limit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maintain_margin")))
    {
        setMaintainMargin(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("maintain_margin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("starting_margin")))
    {
        setStartingMargin(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("starting_margin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("section")))
    {
        setSection(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("section"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("is_lowest_risk")))
    {
        setIsLowestRisk(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("is_lowest_risk"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated_at"))));
    }
}

double RiskIDRes::getId() const
{
    return m_Id;
}


void RiskIDRes::setId(double value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool RiskIDRes::idIsSet() const
{
    return m_IdIsSet;
}

void RiskIDRes::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t RiskIDRes::getCoin() const
{
    return m_Coin;
}


void RiskIDRes::setCoin(utility::string_t value)
{
    m_Coin = value;
    m_CoinIsSet = true;
}
bool RiskIDRes::coinIsSet() const
{
    return m_CoinIsSet;
}

void RiskIDRes::unsetCoin()
{
    m_CoinIsSet = false;
}

double RiskIDRes::getLimit() const
{
    return m_Limit;
}


void RiskIDRes::setLimit(double value)
{
    m_Limit = value;
    m_LimitIsSet = true;
}
bool RiskIDRes::limitIsSet() const
{
    return m_LimitIsSet;
}

void RiskIDRes::unsetLimit()
{
    m_LimitIsSet = false;
}

utility::string_t RiskIDRes::getMaintainMargin() const
{
    return m_Maintain_margin;
}


void RiskIDRes::setMaintainMargin(utility::string_t value)
{
    m_Maintain_margin = value;
    m_Maintain_marginIsSet = true;
}
bool RiskIDRes::maintainMarginIsSet() const
{
    return m_Maintain_marginIsSet;
}

void RiskIDRes::unsetMaintain_margin()
{
    m_Maintain_marginIsSet = false;
}

utility::string_t RiskIDRes::getStartingMargin() const
{
    return m_Starting_margin;
}


void RiskIDRes::setStartingMargin(utility::string_t value)
{
    m_Starting_margin = value;
    m_Starting_marginIsSet = true;
}
bool RiskIDRes::startingMarginIsSet() const
{
    return m_Starting_marginIsSet;
}

void RiskIDRes::unsetStarting_margin()
{
    m_Starting_marginIsSet = false;
}

utility::string_t RiskIDRes::getSection() const
{
    return m_Section;
}


void RiskIDRes::setSection(utility::string_t value)
{
    m_Section = value;
    m_SectionIsSet = true;
}
bool RiskIDRes::sectionIsSet() const
{
    return m_SectionIsSet;
}

void RiskIDRes::unsetSection()
{
    m_SectionIsSet = false;
}

double RiskIDRes::getIsLowestRisk() const
{
    return m_Is_lowest_risk;
}


void RiskIDRes::setIsLowestRisk(double value)
{
    m_Is_lowest_risk = value;
    m_Is_lowest_riskIsSet = true;
}
bool RiskIDRes::isLowestRiskIsSet() const
{
    return m_Is_lowest_riskIsSet;
}

void RiskIDRes::unsetIs_lowest_risk()
{
    m_Is_lowest_riskIsSet = false;
}

utility::string_t RiskIDRes::getCreatedAt() const
{
    return m_Created_at;
}


void RiskIDRes::setCreatedAt(utility::string_t value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool RiskIDRes::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void RiskIDRes::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::string_t RiskIDRes::getUpdatedAt() const
{
    return m_Updated_at;
}


void RiskIDRes::setUpdatedAt(utility::string_t value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool RiskIDRes::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void RiskIDRes::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

}
}
}
}

