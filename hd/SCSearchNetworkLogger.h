//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventListener.h"

@class NSString;

@interface SCSearchNetworkLogger : NSObject <SCEventListener>
{
    long long _viewSource;
}

- (void)_logItemDownloadErrorEventWithDictionary:(id)arg1;
- (void)_logSearchItemDownloadLatencyEventWithDictionary:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithViewSource:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

