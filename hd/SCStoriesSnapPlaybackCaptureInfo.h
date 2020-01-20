//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCStoriesSnapPlaybackCaptureInfo : NSObject <NSCopying>
{
    long long _cameraType;
    long long _orientation;
    NSString *_encryptedGeoLogString;
}

@property(readonly, copy, nonatomic) NSString *encryptedGeoLogString; // @synthesize encryptedGeoLogString=_encryptedGeoLogString;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCameraType:(long long)arg1 orientation:(long long)arg2 encryptedGeoLogString:(id)arg3;

@end
