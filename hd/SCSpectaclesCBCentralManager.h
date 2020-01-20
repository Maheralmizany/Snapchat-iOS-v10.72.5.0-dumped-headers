//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBCentralManager.h"

#import "SCSpectaclesCBCentralManagerEventListener.h"

@class NSMutableSet, NSString, SCSpectaclesCBCentralManagerEventListenerAnnouncer;

@interface SCSpectaclesCBCentralManager : CBCentralManager <SCSpectaclesCBCentralManagerEventListener>
{
    NSMutableSet *_hitList;
    SCSpectaclesCBCentralManagerEventListenerAnnouncer *_announcer;
    id <SCPerforming> _performer;
}

+ (id)shared;
@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) SCSpectaclesCBCentralManagerEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void).cxx_destruct;
- (void)shutdown;
- (void)centralManager:(id)arg1 willRestoreState:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (id)_initWithAnnouncer:(id)arg1 performer:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
