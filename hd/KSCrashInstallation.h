//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KSCrashReportFilterPipeline, NSArray, NSMutableData, NSMutableDictionary;

@interface KSCrashInstallation : NSObject
{
    int _nextFieldIndex;
    int _deleteBehavior;
    NSMutableData *_crashHandlerDataBacking;
    NSMutableDictionary *_fields;
    NSArray *_requiredProperties;
    KSCrashReportFilterPipeline *_prependedFilters;
}

@property(retain, nonatomic) KSCrashReportFilterPipeline *prependedFilters; // @synthesize prependedFilters=_prependedFilters;
@property(retain, nonatomic) NSArray *requiredProperties; // @synthesize requiredProperties=_requiredProperties;
@property(retain, nonatomic) NSMutableDictionary *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) NSMutableData *crashHandlerDataBacking; // @synthesize crashHandlerDataBacking=_crashHandlerDataBacking;
@property(nonatomic) int nextFieldIndex; // @synthesize nextFieldIndex=_nextFieldIndex;
- (void).cxx_destruct;
- (id)sink;
- (void)addPreFilter:(id)arg1;
- (void)sendAllReportsWithCompletion:(CDUnknownBlockType)arg1;
- (void)installWithHandler:(id)arg1;
- (void)install;
@property(nonatomic) int deleteBehavior; // @synthesize deleteBehavior=_deleteBehavior;
@property CDUnknownFunctionPointerType onCrash;
- (id)makeKeyPaths:(id)arg1;
- (id)makeKeyPath:(id)arg1;
- (id)validateProperties;
- (void)reportFieldForProperty:(id)arg1 setValue:(id)arg2;
- (void)reportFieldForProperty:(id)arg1 setKey:(id)arg2;
- (id)reportFieldForProperty:(id)arg1;
@property(readonly, nonatomic) CDStruct_6a6307c4 *crashHandlerData;
- (void)dealloc;
- (id)initWithRequiredProperties:(id)arg1;
- (id)init;

@end

