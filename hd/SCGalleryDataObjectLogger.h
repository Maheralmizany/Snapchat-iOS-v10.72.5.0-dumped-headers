//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataObjectContextLogging.h"

@class NSString;

@interface SCGalleryDataObjectLogger : NSObject <SCDataObjectContextLogging>
{
}

- (_Bool)_shouldReportBlizzardEvent;
- (void)logDataObjectContextError:(unsigned long long)arg1 errorMessage:(id)arg2 extraParams:(id)arg3;
- (id)_convertCoreDataExceptionType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
