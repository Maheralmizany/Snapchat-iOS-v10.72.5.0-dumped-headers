//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPlugInRegistry.h"

@class NSMutableSet, NSSet;

@interface SCPlugInSetRegistry : SCPlugInRegistry
{
    NSMutableSet *_plugIns;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *registeredPlugIns;
- (void)register:(id)arg1;
- (id)init;

@end

