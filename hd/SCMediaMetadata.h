//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, SCMediaDimensions, SCMediaDuration, SCMediaEncryptionInfo;

@interface SCMediaMetadata : NSObject <NSCopying, NSCoding>
{
    NSString *_mediaId;
    long long _type;
    long long _orientation;
    SCMediaDimensions *_dimensions;
    SCMediaEncryptionInfo *_encryptionInfo;
    SCMediaDuration *_duration;
}

@property(readonly, copy, nonatomic) SCMediaDuration *duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) SCMediaEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, copy, nonatomic) SCMediaDimensions *dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaId:(id)arg1 type:(long long)arg2 orientation:(long long)arg3 dimensions:(id)arg4 encryptionInfo:(id)arg5 duration:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end

