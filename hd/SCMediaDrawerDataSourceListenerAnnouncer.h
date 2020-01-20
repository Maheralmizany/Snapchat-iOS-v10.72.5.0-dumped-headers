//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMediaDrawerDataSourceListener.h"

@interface SCMediaDrawerDataSourceListenerAnnouncer : NSObject <SCMediaDrawerDataSourceListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCMediaDrawerDataSourceListener>, std::__1::allocator<__weak id<SCMediaDrawerDataSourceListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mediaListDidChangeAtIndexes:(id)arg1;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (id)description;

@end

