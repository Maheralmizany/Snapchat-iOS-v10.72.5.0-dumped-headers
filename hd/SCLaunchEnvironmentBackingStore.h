//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, SCLaunchEnvironmentSelectorMap;

@interface SCLaunchEnvironmentBackingStore : NSObject
{
    NSDictionary *_environment;
    NSArray *_arguments;
    SCLaunchEnvironmentSelectorMap *_environmentScheme;
    NSArray *_argumentScheme;
}

@property(readonly, nonatomic) NSArray *argumentScheme; // @synthesize argumentScheme=_argumentScheme;
@property(readonly, nonatomic) SCLaunchEnvironmentSelectorMap *environmentScheme; // @synthesize environmentScheme=_environmentScheme;
@property(readonly, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)valueForSelector:(SEL)arg1;
- (id)initWithEnvironment:(id)arg1 arguments:(id)arg2 environmentScheme:(id)arg3 argumentScheme:(id)arg4;

@end
