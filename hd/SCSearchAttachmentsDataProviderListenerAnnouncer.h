//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchAttachmentsDataProviderListener.h"

@class NSString;

@interface SCSearchAttachmentsDataProviderListenerAnnouncer : NSObject <SCSearchAttachmentsDataProviderListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCSearchAttachmentsDataProviderListener>, std::__1::allocator<__weak id<SCSearchAttachmentsDataProviderListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)attachmentDataDidUpdate:(id)arg1;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

