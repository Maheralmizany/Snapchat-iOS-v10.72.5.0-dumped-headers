//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCSystemScope;

@interface SCGrapheneEntryPoint : SCEntryPoint
{
    SCSystemScope *_systemScope;
    SCServicesExposer *_grapheneServices;
}

@property(retain, nonatomic) SCServicesExposer *grapheneServices; // @synthesize grapheneServices=_grapheneServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

@end
