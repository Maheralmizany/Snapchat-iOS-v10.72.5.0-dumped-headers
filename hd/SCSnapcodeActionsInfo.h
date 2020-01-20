//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface SCSnapcodeActionsInfo : NSObject
{
    int _snapcodeType;
    int _version;
    NSDictionary *_scanActionResponse;
    NSArray *_scannableAction;
    NSString *_scanDecodedData;
    NSString *_scannableId;
}

@property(nonatomic) int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *scannableId; // @synthesize scannableId=_scannableId;
@property(nonatomic) int snapcodeType; // @synthesize snapcodeType=_snapcodeType;
@property(retain, nonatomic) NSString *scanDecodedData; // @synthesize scanDecodedData=_scanDecodedData;
@property(retain, nonatomic) NSArray *scannableAction; // @synthesize scannableAction=_scannableAction;
@property(retain, nonatomic) NSDictionary *scanActionResponse; // @synthesize scanActionResponse=_scanActionResponse;
- (void).cxx_destruct;

@end
