//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString;

@interface SCArchiveUtils : NSObject <SCTraceEnabled>
{
    id <SCArchiveBatteryLoggerProtocol> _batteryLogger;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)pathWithFileName:(id)arg1;
- (_Bool)removeFileAtPath:(id)arg1;
- (id)loadObjectOfType:(id)arg1 fromPath:(id)arg2 disableLogging:(_Bool)arg3;
- (id)loadObjectOfType:(id)arg1 fromPath:(id)arg2;
- (_Bool)saveObject:(id)arg1 toPath:(id)arg2 type:(id)arg3;
- (_Bool)saveObject:(id)arg1 toPath:(id)arg2;
- (void)startServicesWithBatteryLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
