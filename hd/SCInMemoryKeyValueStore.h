//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCKeyValuePersisting.h"

@class NSMutableDictionary, NSString;

@interface SCInMemoryKeyValueStore : NSObject <SCKeyValuePersisting>
{
    NSMutableDictionary *_dict;
}

- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 deserializeToClass:(Class)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)allKeys;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

