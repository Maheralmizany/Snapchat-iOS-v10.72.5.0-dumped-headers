//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLRUCache;

@interface SCConfigLRUCache : NSObject
{
    SCLRUCache *_configsLRUCache;
}

- (void).cxx_destruct;
- (unsigned long long)size;
- (id)allConfigKeys;
- (void)batchSetFromDict:(id)arg1;
- (void)setConfigRules:(id)arg1 forConfigKey:(id)arg2;
- (id)configRulesForConfigKey:(id)arg1;
- (id)initWithSizeLimit:(unsigned long long)arg1;

@end

