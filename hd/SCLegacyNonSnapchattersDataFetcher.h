//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNonSnapchattersDataFetching.h"

@interface SCLegacyNonSnapchattersDataFetcher : NSObject <SCNonSnapchattersDataFetching>
{
    id <SCLegacyContactNonSnapchatterProvider> _contactNonSnapchatterProvider;
}

- (void).cxx_destruct;
- (id)contactNonSnapchatters;
- (void)contactNonSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContactNonSnapchatterProvider:(id)arg1;

@end

