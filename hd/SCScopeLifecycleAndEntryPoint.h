//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCEntryPoint, SCScopeLifecycle;

@interface SCScopeLifecycleAndEntryPoint : NSObject
{
    SCScopeLifecycle *_lifecycle;
    SCEntryPoint *_entryPoint;
}

@property(readonly, nonatomic) SCEntryPoint *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) SCScopeLifecycle *lifecycle; // @synthesize lifecycle=_lifecycle;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToLifecycleAndEntryPoint:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLifecycle:(id)arg1 entryPoint:(id)arg2;

@end

