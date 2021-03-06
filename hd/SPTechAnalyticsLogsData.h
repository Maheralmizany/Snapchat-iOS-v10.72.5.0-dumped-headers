//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTechAnalyticsData.h"

@class NSData, NSString;

@interface SPTechAnalyticsLogsData : NSObject <SPTechAnalyticsData>
{
    NSString *_filename;
    NSString *_contentType;
    NSString *_analyticsType;
    NSString *_logs;
}

@property(readonly, copy, nonatomic) NSString *logs; // @synthesize logs=_logs;
@property(readonly, copy, nonatomic) NSString *analyticsType; // @synthesize analyticsType=_analyticsType;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data;
- (id)initWithLogs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

