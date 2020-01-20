//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnifiedProfileViewControllerLifecycleListener.h"

@class NSString;

@interface SCUnifiedProfileViewControllerLifecycleListenerAnnouncer : NSObject <SCUnifiedProfileViewControllerLifecycleListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCUnifiedProfileViewControllerLifecycleListener>, std::__1::allocator<__weak id<SCUnifiedProfileViewControllerLifecycleListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)unifiedProfileDidDisappear;
- (void)unifiedProfileWillAppear;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

