//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SCTransitionState : NSObject
{
    NSString *_state;
    NSString *_trigger;
    NSDate *_trigeredTime;
}

+ (id)newWithState:(id)arg1 triggeredBy:(id)arg2;
@property(retain) NSDate *trigeredTime; // @synthesize trigeredTime=_trigeredTime;
@property(retain) NSString *trigger; // @synthesize trigger=_trigger;
@property(retain) NSString *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
