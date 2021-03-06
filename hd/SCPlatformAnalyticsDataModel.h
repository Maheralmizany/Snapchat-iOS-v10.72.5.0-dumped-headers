//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSNumber, NSString;

@interface SCPlatformAnalyticsDataModel : NSObject <NSCopying, NSCoding>
{
    NSNumber *_textCharacterCount;
    NSString *_stickerId;
    NSString *_stickerPackId;
    double _noteTimeSec;
}

@property(readonly, nonatomic) double noteTimeSec; // @synthesize noteTimeSec=_noteTimeSec;
@property(readonly, copy, nonatomic) NSString *stickerPackId; // @synthesize stickerPackId=_stickerPackId;
@property(readonly, copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
@property(readonly, copy, nonatomic) NSNumber *textCharacterCount; // @synthesize textCharacterCount=_textCharacterCount;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTextCharacterCount:(id)arg1 stickerId:(id)arg2 stickerPackId:(id)arg3 noteTimeSec:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end

