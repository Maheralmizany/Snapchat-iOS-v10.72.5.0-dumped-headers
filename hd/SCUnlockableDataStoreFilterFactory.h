//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCPreferences;

@interface SCUnlockableDataStoreFilterFactory : NSObject
{
    SCPreferences *_userPreferences;
    NSString *_userName;
    id <SCUnlockableLensDataStoreFilterProtocol> _blacklistFilter;
    id <SCUnlockableLensDataStoreFilterProtocol> _removedLensFilter;
}

- (void).cxx_destruct;
- (id)removedLensFilter;
- (id)blacklistFilter;
- (id)initWithUserPreferences:(id)arg1 userName:(id)arg2;

@end
