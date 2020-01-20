//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdUnlockableLongformVideoView.h"

@class NSNumber, NSString;

@interface SOJUAdUnlockableLongformVideoView : NSObject <SOJUAdUnlockableLongformVideoView>
{
    NSNumber *_viewTimeSec;
    NSNumber *_mediaDurationSec;
    NSNumber *_renderedTimestampMs;
    NSNumber *_openTimestampMs;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *openTimestampMs; // @synthesize openTimestampMs=_openTimestampMs;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampMs; // @synthesize renderedTimestampMs=_renderedTimestampMs;
@property(readonly, copy, nonatomic) NSNumber *mediaDurationSec; // @synthesize mediaDurationSec=_mediaDurationSec;
@property(readonly, copy, nonatomic) NSNumber *viewTimeSec; // @synthesize viewTimeSec=_viewTimeSec;
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
- (id)initWithViewTimeSec:(id)arg1 mediaDurationSec:(id)arg2 renderedTimestampMs:(id)arg3 openTimestampMs:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)openTimestampMsValue;
- (long long)renderedTimestampMsValue;
- (float)mediaDurationSecValue;
- (float)viewTimeSecValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

