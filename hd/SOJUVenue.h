//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUVenue.h"

@class NSArray, NSNumber, NSString;

@interface SOJUVenue : NSObject <SOJUVenue>
{
    NSString *_venueId;
    NSString *_name;
    NSString *_locality;
    NSString *_filterId;
    NSString *_subtitle;
    NSNumber *_splitByServer;
    NSString *_matchingGeofilterId;
    NSNumber *_isExtra;
    NSString *_venueName;
    NSArray *_categories;
    NSString *_iconUrl;
    NSString *_superCategory;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *superCategory; // @synthesize superCategory=_superCategory;
@property(readonly, copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(readonly, copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, copy, nonatomic) NSString *venueName; // @synthesize venueName=_venueName;
@property(readonly, copy, nonatomic) NSNumber *isExtra; // @synthesize isExtra=_isExtra;
@property(readonly, copy, nonatomic) NSString *matchingGeofilterId; // @synthesize matchingGeofilterId=_matchingGeofilterId;
@property(readonly, copy, nonatomic) NSNumber *splitByServer; // @synthesize splitByServer=_splitByServer;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVenueId:(id)arg1 name:(id)arg2 locality:(id)arg3 filterId:(id)arg4 subtitle:(id)arg5 splitByServer:(id)arg6 matchingGeofilterId:(id)arg7 isExtra:(id)arg8 venueName:(id)arg9 categories:(id)arg10 iconUrl:(id)arg11 superCategory:(id)arg12;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isExtraValue;
- (_Bool)splitByServerValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

