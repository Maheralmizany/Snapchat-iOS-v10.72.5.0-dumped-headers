//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCShazamConfiguration : NSObject <NSCopying>
{
    _Bool _enableFrontFacing;
    _Bool _sendOnFinish;
    _Bool _enable;
    float _rollingWindowLength;
    float _initialStartDelay;
    float _sendInterval;
    NSString *_token;
}

@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(readonly, nonatomic) _Bool sendOnFinish; // @synthesize sendOnFinish=_sendOnFinish;
@property(readonly, nonatomic) float sendInterval; // @synthesize sendInterval=_sendInterval;
@property(readonly, nonatomic) float initialStartDelay; // @synthesize initialStartDelay=_initialStartDelay;
@property(readonly, nonatomic) float rollingWindowLength; // @synthesize rollingWindowLength=_rollingWindowLength;
@property(readonly, nonatomic) _Bool enableFrontFacing; // @synthesize enableFrontFacing=_enableFrontFacing;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnableFrontFacing:(_Bool)arg1 rollingWindowLength:(float)arg2 initialStartDelay:(float)arg3 sendInterval:(float)arg4 sendOnFinish:(_Bool)arg5 enable:(_Bool)arg6 token:(id)arg7;

@end

