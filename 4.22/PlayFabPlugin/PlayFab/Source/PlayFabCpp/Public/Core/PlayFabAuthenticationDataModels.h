//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "CoreMinimal.h"
#include "PlayFabCppBaseModel.h"

namespace PlayFab
{
namespace AuthenticationModels
{

    struct PLAYFABCPP_API FEntityKey : public PlayFab::FPlayFabCppBaseModel
    {
        // Unique ID of the entity.
        FString Id;

        // [optional] Entity type. See https://api.playfab.com/docs/tutorials/entities/entitytypes
        FString Type;

        FEntityKey() :
            FPlayFabCppBaseModel(),
            Id(),
            Type()
            {}

        FEntityKey(const FEntityKey& src) :
            FPlayFabCppBaseModel(),
            Id(src.Id),
            Type(src.Type)
            {}

        FEntityKey(const TSharedPtr<FJsonObject>& obj) : FEntityKey()
        {
            readFromValue(obj);
        }

        ~FEntityKey();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetEntityTokenRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The entity to perform this action on.
        TSharedPtr<FEntityKey> Entity;

        FGetEntityTokenRequest() :
            FPlayFabCppRequestCommon(),
            Entity(nullptr)
            {}

        FGetEntityTokenRequest(const FGetEntityTokenRequest& src) :
            FPlayFabCppRequestCommon(),
            Entity(src.Entity.IsValid() ? MakeShareable(new FEntityKey(*src.Entity)) : nullptr)
            {}

        FGetEntityTokenRequest(const TSharedPtr<FJsonObject>& obj) : FGetEntityTokenRequest()
        {
            readFromValue(obj);
        }

        ~FGetEntityTokenRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetEntityTokenResponse : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] The entity id and type.
        TSharedPtr<FEntityKey> Entity;

        // [optional] The token used to set X-EntityToken for all entity based API calls.
        FString EntityToken;

        // [optional] The time the token will expire, if it is an expiring token, in UTC.
        Boxed<FDateTime> TokenExpiration;

        FGetEntityTokenResponse() :
            FPlayFabCppResultCommon(),
            Entity(nullptr),
            EntityToken(),
            TokenExpiration()
            {}

        FGetEntityTokenResponse(const FGetEntityTokenResponse& src) :
            FPlayFabCppResultCommon(),
            Entity(src.Entity.IsValid() ? MakeShareable(new FEntityKey(*src.Entity)) : nullptr),
            EntityToken(src.EntityToken),
            TokenExpiration(src.TokenExpiration)
            {}

        FGetEntityTokenResponse(const TSharedPtr<FJsonObject>& obj) : FGetEntityTokenResponse()
        {
            readFromValue(obj);
        }

        ~FGetEntityTokenResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

}
}