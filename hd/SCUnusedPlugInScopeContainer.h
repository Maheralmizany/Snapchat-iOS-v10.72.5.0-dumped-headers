//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPlugInScopeExposer.h"

@class NSObject;

@interface SCUnusedPlugInScopeContainer : SCPlugInScopeExposer
{
    NSObject *_scope;
}

- (void).cxx_destruct;
- (void)removeScope;
- (id)scope;
- (void)exposePlugInScope:(CDUnknownBlockType)arg1 onPlugInsRegistered:(CDUnknownBlockType)arg2;

@end

