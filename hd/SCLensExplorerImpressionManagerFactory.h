//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLensExplorerHistoryManagerFactory, SCQueuePerformer;

@interface SCLensExplorerImpressionManagerFactory : NSObject
{
    SCLensExplorerHistoryManagerFactory *_historyManagerFactory;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)createLongImpressionManger;
- (id)createShortImpressionManger;
- (id)initWithHistoryManagerFactory:(id)arg1 performer:(id)arg2;

@end

