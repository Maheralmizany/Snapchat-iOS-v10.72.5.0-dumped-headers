//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCStartupCompletionServices : NSObject
{
    SCLazy *_startupScopeCompletionSignal;
}

@property(readonly, nonatomic) SCLazy *startupScopeCompletionSignal; // @synthesize startupScopeCompletionSignal=_startupScopeCompletionSignal;
- (void).cxx_destruct;
- (id)initWithStartupCompletionSignal:(id)arg1;

@end

