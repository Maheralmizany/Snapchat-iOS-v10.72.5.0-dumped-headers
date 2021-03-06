//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate;

@interface SCNetworkConnectionClassItem : NSObject <NSCoding>
{
    long long _downloadConnectionClass;
    long long _uploadConnectionClass;
    long long _downloadBandwidth;
    long long _uploadBandwidth;
    NSDate *_recordTimestamp;
}

@property(retain, nonatomic) NSDate *recordTimestamp; // @synthesize recordTimestamp=_recordTimestamp;
@property(nonatomic) long long uploadBandwidth; // @synthesize uploadBandwidth=_uploadBandwidth;
@property(nonatomic) long long downloadBandwidth; // @synthesize downloadBandwidth=_downloadBandwidth;
@property(nonatomic) long long uploadConnectionClass; // @synthesize uploadConnectionClass=_uploadConnectionClass;
@property(nonatomic) long long downloadConnectionClass; // @synthesize downloadConnectionClass=_downloadConnectionClass;
- (void).cxx_destruct;
- (_Bool)isExpired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUploadBandwidth:(long long)arg1 uploadConnectionClass:(long long)arg2;
- (id)initWithDownloadBandwidth:(long long)arg1 downloadConnectionClass:(long long)arg2;

@end

