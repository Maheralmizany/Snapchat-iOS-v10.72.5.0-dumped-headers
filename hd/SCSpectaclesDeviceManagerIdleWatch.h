//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition;

@interface SCSpectaclesDeviceManagerIdleWatch : NSObject
{
    _Bool _isIdle;
    NSCondition *_condition;
}

@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (void)awaitIsIdle;
- (void)setIsIdle:(_Bool)arg1;
- (id)init;

@end

