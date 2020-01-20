//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, NSValue;

@interface SPFaceDetectionResult : NSObject <NSCoding>
{
    NSValue *_faceRect;
    unsigned long long _source;
}

+ (id)textDescriptionOfSource:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) NSValue *faceRect; // @synthesize faceRect=_faceRect;
- (void).cxx_destruct;
- (id)sourceTextDescriptions;
@property(readonly, copy, nonatomic) NSString *sourceDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryReprersentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFaceRect:(id)arg1 source:(unsigned long long)arg2;

@end
