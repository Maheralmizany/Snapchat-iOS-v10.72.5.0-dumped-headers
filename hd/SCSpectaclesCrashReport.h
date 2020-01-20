//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface SCSpectaclesCrashReport : NSObject
{
    NSString *_commonDescription;
    NSString *_crashDate;
    NSDictionary *_crashParameters;
    NSArray *_attachmentFilePaths;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    NSString *_skuNumber;
    NSString *_serialNumber;
}

@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *skuNumber; // @synthesize skuNumber=_skuNumber;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) NSArray *attachmentFilePaths; // @synthesize attachmentFilePaths=_attachmentFilePaths;
@property(retain, nonatomic) NSDictionary *crashParameters; // @synthesize crashParameters=_crashParameters;
@property(copy, nonatomic) NSString *crashDate; // @synthesize crashDate=_crashDate;
- (void).cxx_destruct;
- (unsigned long long)controllerType;
- (id)crashReason;
- (id)crashGroupingIdentifier;
- (id)crashDescription;
- (id)controllerTypeName;
- (id)initWithCrashDate:(id)arg1 crashParameters:(id)arg2 commonDescription:(id)arg3;

@end
