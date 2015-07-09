//
//  UberRequests.h
//  Bobo
//
//  Created by Zhouboli on 15/7/6.
//  Copyright (c) 2015年 Zhouboli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UberRequest : NSObject

@property (strong, nonatomic) NSString *accessToken;

typedef void (^RequestHandler) (NSDictionary *uberResponse, NSURLResponse *response, NSError *error);

-(void)getResponseFromRequestWithParameters:(NSDictionary *)params withCompletionHandler:(RequestHandler)handler;

@end
